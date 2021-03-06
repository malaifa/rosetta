// -*- mode:c++;tab-width:2;indent-tabs-mode:t;show-trailing-whitespace:t;rm-trailing-spaces:t -*-
// vi: set ts=2 noet:
//
// (c) Copyright Rosetta Commons Member Institutions.
// (c) This file is part of the Rosetta software suite and is made available under license.
// (c) The Rosetta software is developed by the contributing members of the Rosetta Commons.
// (c) For more information, see http://www.rosettacommons.org. Questions about this can be
// (c) addressed to University of Washington UW TechTransfer, email: license@u.washington.edu.

/// @file   utility/options/RealOption.hh
/// @brief  Program real option class
/// @author Stuart G. Mentzer (Stuart_Mentzer@objexx.com)


#ifndef INCLUDED_utility_options_RealOption_hh
#define INCLUDED_utility_options_RealOption_hh


// Unit headers
#include <utility/options/RealOption.fwd.hh>

// Package headers
#include <utility/options/ScalarOption_T_.hh>
#include <utility/options/keys/RealOptionKey.hh>

// ObjexxFCL headers
#include <ObjexxFCL/string.functions.hh>

// C++ headers
#include <cstdlib>
#include <iomanip>
#include <iostream>


namespace utility {
namespace options {


/// @brief Program real option class
class RealOption :
	public ScalarOption_T_< RealOptionKey, double >
{


private: // Types


	typedef  ScalarOption_T_< RealOptionKey, double >  Super;


public: // Creation


	/// @brief Default constructor
	inline
	RealOption()
	{}


	/// @brief Key + description constructor
	inline
	RealOption(
		RealOptionKey const & key_a,
		std::string const & description_a
	) :
		Super( key_a, description_a )
	{}


	/// @brief Clone this
	inline
	RealOption *
	clone() const
	{
		return new RealOption( *this );
	}


	/// @brief Destructor
	inline
	virtual
	~RealOption()
	{}


public: // Properties


	/// @brief Is a string readable as this option's value type?
	inline
	bool
	is_value( std::string const & value_str ) const
	{
		return ObjexxFCL::is_double( value_str );
	}


	/// @brief Is a string readable as this option's value type and a legal command line value?
	inline
	bool
	is_cl_value( std::string const & value_str ) const
	{
		return is_value( value_str );
	}


	/// @brief Option type code string representation
	inline
	std::string
	type_string() const
	{
		return "R";
	}


protected: // Methods


	/// @brief Value of a string
	inline
	Value
	value_of( std::string const & value_str ) const
	{
		if ( ( value_str.empty() ) || ( ! ObjexxFCL::is_double( value_str ) ) ) {
			std::cerr << "ERROR: Illegal value for real option -" << id()
				<< " specified: " << value_str << std::endl;
			std::exit( EXIT_FAILURE );
		}
		return ObjexxFCL::double_of( value_str );
	}


	/// @brief Setup stream state for the Option value type
	virtual
	void
	stream_setup( std::ostream & stream ) const
	{
		stream << std::setprecision( 15 );
	}


}; // RealOption


} // namespace options
} // namespace utility


#endif // INCLUDED_utility_options_RealOption_HH
