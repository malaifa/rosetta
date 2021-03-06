// -*- mode:c++;tab-width:2;indent-tabs-mode:t;show-trailing-whitespace:t;rm-trailing-spaces:t -*-
// vi: set ts=2 noet:
//
// (c) Copyright Rosetta Commons Member Institutions.
// (c) This file is part of the Rosetta software suite and is made available under license.
// (c) The Rosetta software is developed by the contributing members of the Rosetta Commons.
// (c) For more information, see http://www.rosettacommons.org. Questions about this can be
// (c) addressed to University of Washington UW TechTransfer, email: license@u.washington.edu.

/// @file MembraneTopologyClaimer
/// @brief membrane topology
/// @author Yifan Song


#ifndef INCLUDED_protocols_topology_broker_MembraneTopologyClaimer_hh
#define INCLUDED_protocols_topology_broker_MembraneTopologyClaimer_hh


// Unit Headers
#include <protocols/topology_broker/MembraneTopologyClaimer.fwd.hh>

// Package Headers
#include <protocols/topology_broker/claims/DofClaim.fwd.hh>
#include <protocols/topology_broker/TopologyClaimer.hh>

// Project Headers
#include <core/pose/Pose.hh>

#include <utility/pointer/ReferenceCount.hh>

#include <utility/vector1.hh>

// option key includes


namespace protocols {
namespace topology_broker {

class MembraneTopologyClaimer : public TopologyClaimer {
	typedef TopologyClaimer Parent;

public:

	//c'stor
	MembraneTopologyClaimer();
	MembraneTopologyClaimer( core::pose::Pose const& input_pose );

	//clone
	virtual TopologyClaimerOP clone() const {
		return TopologyClaimerOP( new MembraneTopologyClaimer( *this ) );
	}

	/// @brief type() is specifying the output name of the TopologyClaimer
	virtual std::string type() const {
		return _static_type_name();
	}

	virtual bool claimer_builds_own_fold_tree();

	virtual void set_pose_from_broker(core::pose::Pose& pose);

	virtual void pre_process(core::pose::Pose& pose);

	virtual void generate_claims( claims::DofClaims& dof_claims);

	virtual void build_fold_tree(core::pose::Pose& pose, core::kinematics::FoldTree& fold_tree_in);

	virtual core::kinematics::FoldTreeOP get_fold_tree(core::pose::Pose& pose);

	static std::string _static_type_name() {
		return "MembraneTopologyClaimer";
	}

	virtual void add_mover(
		moves::RandomMover& random_mover,
		core::pose::Pose const& pose,
		abinitio::StageID stageID,
		core::scoring::ScoreFunction const& scorefxn,
		core::Real progress
	);

	virtual void initialize_dofs( core::pose::Pose&,
		claims::DofClaims const& init_claims,
		claims::DofClaims& /*failed_to_init*/ );

	void addVirtualResAsRootMembrane( core::pose::Pose & pose );

private:

	/// @brief starting pose
	core::pose::Pose input_pose_;

};

}
}

#endif
