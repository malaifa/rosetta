// -*- mode:c++;tab-width:2;indent-tabs-mode:t;show-trailing-whitespace:t;rm-trailing-spaces:t -*-
// vi: set ts=2 noet:
//
// (c) Copyright Rosetta Commons Member Institutions.
// (c) This file is part of the Rosetta software suite and is made available under license.
// (c) The Rosetta software is developed by the contributing members of the Rosetta Commons.
// (c) For more information, see http://www.rosettacommons.org. Questions about this can be
// (c) addressed to University of Washington UW TechTransfer, email: license@u.washington.edu.

/// @file   core/chemical/rotamers/NCAARotamerLibrarySpecification.cc
/// @brief  The NCAARotamerLibrarySpecification class specifies building NCAARotamers.
/// @author Rocco Moretti (rmorettase@gmail.com)

// Unit headers
#include <core/chemical/rotamers/NCAARotamerLibrarySpecification.hh>
#include <core/chemical/rotamers/NCAARotamerLibrarySpecificationCreator.hh>

// Utility headers
#include <core/chemical/ResidueType.hh>
#include <utility/exit.hh>
#include <basic/Tracer.hh>

namespace core {
namespace chemical {
namespace rotamers {

static THREAD_LOCAL basic::Tracer TR("core.chemical.rotamers.NCAARotamerLibrarySpecification");

// Creator Functions

RotamerLibrarySpecificationOP
NCAARotamerLibrarySpecificationCreator::create() const {
	return RotamerLibrarySpecificationOP( new NCAARotamerLibrarySpecification );
}

RotamerLibrarySpecificationOP
NCAARotamerLibrarySpecificationCreator::create( std::istream & input ) const {
	return RotamerLibrarySpecificationOP( new NCAARotamerLibrarySpecification( input ) );
}

std::string
NCAARotamerLibrarySpecificationCreator::keyname() const {
	return NCAARotamerLibrarySpecification::library_name();
}

// Specification Functions

NCAARotamerLibrarySpecification::NCAARotamerLibrarySpecification():
	semirotameric_ncaa_rotlib_( false ),
	nrchi_symmetric_( false ),
	nrchi_start_angle_( 0 )
{}

NCAARotamerLibrarySpecification::NCAARotamerLibrarySpecification(std::string const & ncaa_rotlib_path ) :
	ncaa_rotlib_path_( ncaa_rotlib_path ),
	semirotameric_ncaa_rotlib_( false ),
	nrchi_symmetric_( false ),
	nrchi_start_angle_( 0 )
{}

NCAARotamerLibrarySpecification::NCAARotamerLibrarySpecification( std::istream & input ) :
	semirotameric_ncaa_rotlib_( false ),
	nrchi_symmetric_( false ),
	nrchi_start_angle_( 0 )
{
	input >> ncaa_rotlib_path_;
	if ( ! input ) {
		utility_exit_with_message("Must provide rotamer library path for NCAA rotamer library specification.");
	}
	core::Size nbins;
	input >> nbins;
	while ( input ) {
		ncaa_rotlib_n_bins_per_rot_.push_back( nbins );
		input >> nbins;
	}
	TR.Debug << "Read " << ncaa_rotlib_n_bins_per_rot_.size() << " entries for NCAA rotamer library specification with path " << ncaa_rotlib_path_ << std::endl;
}

NCAARotamerLibrarySpecification::~NCAARotamerLibrarySpecification() {}

std::string
NCAARotamerLibrarySpecification::keyname() const {
	return library_name();
}

std::string
NCAARotamerLibrarySpecification::library_name() {
	return "NCAA";
}

std::string
NCAARotamerLibrarySpecification::cache_tag(core::chemical::ResidueType const & restype ) const {
	std::ostringstream ss;
	assert( ncaa_rotlib_path_.size() );
	ss << ncaa_rotlib_path_;
	ss << "%" << restype.mainchain_atoms().size();
	ss << "%" << int(semirotameric_ncaa_rotlib_);
	if ( semirotameric_ncaa_rotlib_ ) {
		ss << "%" << restype.name3();
		ss << "%" << int(nrchi_symmetric_);
		ss << "%" << nrchi_start_angle_;
	}
	for ( core::Size ii(1); ii <= ncaa_rotlib_n_bins_per_rot_.size(); ++ii ) {
		ss << "|" << ncaa_rotlib_n_bins_per_rot_[ii];
	}
	return ss.str();
}

} //namespace rotamers
} //namespace chemical
} //namespace core
