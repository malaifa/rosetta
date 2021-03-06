// -*- mode:c++;tab-width:2;indent-tabs-mode:t;show-trailing-whitespace:t;rm-trailing-spaces:t -*-
// vi: set ts=2 noet:
//
// (c) Copyright Rosetta Commons Member Institutions.
// (c) This file is part of the Rosetta software suite and is made available under license.
// (c) The Rosetta software is developed by the contributing members of the Rosetta Commons.
// (c) For more information, see http://www.rosettacommons.org. Questions about this can be
// (c) addressed to University of Washington UW TechTransfer, email: license@u.washington.edu.

/// @author Oliver Lange (olange@u.washington.edu)
/// @date   Wed Oct 20 12:08:31 2007


#ifndef INCLUDED_protocols_abinitio_PairingStatistics_fwd_hh
#define INCLUDED_protocols_abinitio_PairingStatistics_fwd_hh

#include <utility/pointer/owning_ptr.hh>

namespace protocols {
namespace abinitio {

//forward declaration for private class
class PairingStatistics;
typedef utility::pointer::shared_ptr< PairingStatistics > PairingStatisticsOP;
typedef utility::pointer::shared_ptr< PairingStatistics const > PairingStatisticsCOP;


}
}

#endif
