// -*- mode:c++;tab-width:2;indent-tabs-mode:t;show-trailing-whitespace:t;rm-trailing-spaces:t -*-
// vi: set ts=2 noet:
//
// (c) Copyright Rosetta Commons Member Institutions.
// (c) This file is part of the Rosetta software suite and is made available under license.
// (c) The Rosetta software is developed by the contributing members of the Rosetta Commons.
// (c) For more information, see http://www.rosettacommons.org. Questions about this can be
// (c) addressed to University of Washington UW TechTransfer, email: license@u.washington.edu.

/// @file   basic/resource_manager/NativeFallbackConfiguration.fwd.hh
/// @brief  forward hearder for NativeFallbackConfiguration class
/// @author Matthew O'Meara mattjomeara@gmail.com

#ifndef INCLUDED_basic_resource_manager_fallback_configuration_NativeFallbackConfiguration_FWD_HH
#define INCLUDED_basic_resource_manager_fallback_configuration_NativeFallbackConfiguration_FWD_HH

#include <utility/pointer/owning_ptr.hh>

namespace basic {
namespace resource_manager {
namespace fallback_configuration {

class NativeFallbackConfiguration;
typedef utility::pointer::shared_ptr< NativeFallbackConfiguration > NativeFallbackConfigurationOP;
typedef utility::pointer::shared_ptr< NativeFallbackConfiguration const > NativeFallbackConfigurationCOP;

} // fallback_configuration
} // resource_manager
} // basic

#endif // include guard
