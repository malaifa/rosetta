// -*- mode:c++;tab-width:2;indent-tabs-mode:t;show-trailing-whitespace:t;rm-trailing-spaces:t -*-
// vi: set ts=2 noet:
//
// (c) Copyright Rosetta Commons Member Institutions.
// (c) This file is part of the Rosetta software suite and is made available under license.
// (c) The Rosetta software is developed by the contributing members of the Rosetta Commons.
// (c) For more information, see http://www.rosettacommons.org. Questions about this can be
// (c) addressed to University of Washington UW TechTransfer, email: license@u.washington.edu.

/// @file   protocols/fldsgn/SheetRemodelConstraintGeneratorCreator.hh
/// @brief  MoverCreator for the SheetRemodelConstraintGenerator
/// @author Tom Linsky (tlinsky at uw dot edu)
#ifndef INCLUDED_protocols_fldsgn_SheetRemodelConstraintGeneratorCreator_hh
#define INCLUDED_protocols_fldsgn_SheetRemodelConstraintGeneratorCreator_hh

// Package Headers
#include <protocols/moves/MoverCreator.hh>

// Utility Headers
#include <utility/pointer/ReferenceCount.hh>

// c++ headers
#include <string>

namespace protocols {
namespace fldsgn {

class SheetRemodelConstraintGeneratorCreator : public protocols::moves::MoverCreator
{
public:
	virtual protocols::moves::MoverOP create_mover() const;
	virtual std::string keyname() const;
};


} //namespace fldsgn
} //namespace protocols

#endif
