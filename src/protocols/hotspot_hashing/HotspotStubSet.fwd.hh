// -*- mode:c++;tab-width:2;indent-tabs-mode:t;show-trailing-whitespace:t;rm-trailing-spaces:t -*-
// vi: set ts=2 noet:
//
// (c) Copyright Rosetta Commons Member Institutions.
// (c) This file is part of the Rosetta software suite and is made available under license.
// (c) The Rosetta software is developed by the contributing members of the Rosetta Commons.
// (c) For more information, see http://www.rosettacommons.org. Questions about this can be
// (c) addressed to University of Washington UW TechTransfer, email: license@u.washington.edu.

/// @file
/// @brief
/// @author John Karanicolas, Jacob Corn


#ifndef INCLUDED_protocols_hotspot_hashing_HotspotStubSet_fwd_hh
#define INCLUDED_protocols_hotspot_hashing_HotspotStubSet_fwd_hh

#include <utility/pointer/owning_ptr.hh>

namespace protocols {
namespace hotspot_hashing {

class HotspotStubSet;
typedef utility::pointer::shared_ptr< HotspotStubSet > HotspotStubSetOP;
typedef utility::pointer::shared_ptr< HotspotStubSet const > HotspotStubSetCOP;

} // namespace hotspot_hashing
} // namespace protocols


#endif