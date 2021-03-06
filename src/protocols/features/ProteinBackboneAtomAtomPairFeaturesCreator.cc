// -*- mode:c++;tab-width:2;indent-tabs-mode:t;show-trailing-whitespace:t;rm-trailing-spaces:t -*-
// vi: set ts=2 noet:
//
// (c) Copyright Rosetta Commons Member Institutions.
// (c) This file is part of the Rosetta software suite and is made available under license.
// (c) The Rosetta software is developed by the contributing members of the Rosetta Commons.
// (c) For more information, see http://www.rosettacommons.org. Questions about this can be
// (c) addressed to University of Washington UW TechTransfer, email: license@u.washington.edu.

/// @file   protocols/feature/ProteinBackboneAtomAtomPairFeaturesCreator.hh
/// @brief  Header for ProteinBackboneAtomAtomPairFeaturesCreator for the ProteinBackboneAtomAtomPairFeatures load-time factory registration scheme
/// @author Matthew O'Meara

// Unit Headers
#include <protocols/features/ProteinBackboneAtomAtomPairFeaturesCreator.hh>

// Package Headers

#include <protocols/features/FeaturesReporterCreator.hh>
#include <protocols/features/ProteinBackboneAtomAtomPairFeatures.hh>

#include <utility/vector1.hh>


namespace protocols {
namespace features {

ProteinBackboneAtomAtomPairFeaturesCreator::ProteinBackboneAtomAtomPairFeaturesCreator() {}
ProteinBackboneAtomAtomPairFeaturesCreator::~ProteinBackboneAtomAtomPairFeaturesCreator() {}
FeaturesReporterOP ProteinBackboneAtomAtomPairFeaturesCreator::create_features_reporter() const {
	return FeaturesReporterOP( new ProteinBackboneAtomAtomPairFeatures );
}

std::string ProteinBackboneAtomAtomPairFeaturesCreator::type_name() const {
	return "ProteinBackboneAtomAtomPairFeatures";
}

} //namespace features
} //namespace protocols
