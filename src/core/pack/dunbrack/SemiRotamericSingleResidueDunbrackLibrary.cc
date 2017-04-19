// -*- mode:c++;tab-width:2;indent-tabs-mode:t;show-trailing-whitespace:t;rm-trailing-spaces:t -*-
// vi: set ts=2 noet:
//
// (c) Copyright Rosetta Commons Member Institutions.
// (c) This file is part of the Rosetta software suite and is made available under license.
// (c) The Rosetta software is developed by the contributing members of the Rosetta Commons.
// (c) For more information, see http://www.rosettacommons.org. Questions about this can be
// (c) addressed to University of Washington UW TechTransfer, email: license@u.washington.edu.

/// @file    core/scoring/dunbrack/SemiRotamericSingleResidueDunbrackLibrary.cc
/// @brief   Implementation of semi-rotameric rotamer libraries from Jun08
/// @author  Andrew Leaver-Fay

// Unit Headers
#include <core/pack/dunbrack/SemiRotamericSingleResidueDunbrackLibrary.hh>

#include <core/types.hh>

#include <utility/vector1.hh>


namespace core {
namespace pack {
namespace dunbrack {

bool
psc_compare( ProbSortClass left, ProbSortClass right )
{
	return left.probability_ < right.probability_;
}

/*
template class SemiRotamericSingleResidueDunbrackLibrary< ONE >;
template class SemiRotamericSingleResidueDunbrackLibrary< TWO >;
template class SemiRotamericSingleResidueDunbrackLibrary< THREE >;
template class SemiRotamericSingleResidueDunbrackLibrary< FOUR >;
*/

} // namespace dunbrack
} // namespace scoring
} // namespace core
