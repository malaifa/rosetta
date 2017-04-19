// -*- mode:c++;tab-width:2;indent-tabs-mode:t;show-trailing-whitespace:t;rm-trailing-spaces:t -*-
// vi: set ts=2 noet:
//
// (c) Copyright Rosetta Commons Member Institutions.
// (c) This file is part of the Rosetta software suite and is made available under license.
// (c) The Rosetta software is developed by the contributing members of the Rosetta Commons.
// (c) For more information, see http://www.rosettacommons.org. Questions about this can be
// (c) addressed to University of Washington UW TechTransfer, email: license@u.washington.edu.

/// @file protocols/protein_interface_design/movers/SetAtomTree.hh
/// @author Sarel Fleishman (sarelf@u.washington.edu), Jacob Corn (jecorn@u.washington.edu), Eva-Maria Strauch (evas01@u.washington.edu)

#ifndef INCLUDED_protocols_protein_interface_design_movers_SetAtomTree_hh
#define INCLUDED_protocols_protein_interface_design_movers_SetAtomTree_hh

#include <core/types.hh>
#include <core/pose/Pose.fwd.hh>
#include <utility/tag/Tag.fwd.hh>
#include <protocols/filters/Filter.fwd.hh>
#include <protocols/moves/Mover.hh>
#include <basic/datacache/DataMap.fwd.hh>
#include <core/kinematics/FoldTree.fwd.hh>

#include <utility/vector1.hh>


namespace protocols {
namespace protein_interface_design {
namespace movers {

/// @brief a mover that sets a user-defined atom tree
class SetAtomTree : public protocols::moves::Mover
{
public :
	SetAtomTree();
	/// Commenting out to fix PyRosetta build  SetAtomTree( core::kinematics::FoldTreeOP ft );
	virtual ~SetAtomTree();
	/// Commenting out to fix PyRosetta build  void fold_tree( core::kinematics::FoldTreeOP ft );
	/// Commenting out to fix PyRosetta build  core::kinematics::FoldTreeOP fold_tree() const;
	void apply( core::pose::Pose & pose );
	virtual std::string get_name() const;
	protocols::moves::MoverOP clone() const;
	protocols::moves::MoverOP fresh_instance() const { return protocols::moves::MoverOP( new SetAtomTree ); }
	void parse_my_tag( utility::tag::TagCOP tag, basic::datacache::DataMap &, protocols::filters::Filters_map const &, protocols::moves::Movers_map const &, core::pose::Pose const & );
	core::kinematics::FoldTreeOP create_atom_tree( core::pose::Pose const & pose, core::Size const host_chain, core::Size const resnum, core::Size const anchor_num_ = 0, std::string const & connect_to = "", std::string const & connect_from = "" );//if connect_to or connect_from = "" optimal_connection_point is invoked
	bool simple_ft() const {return simple_ft_; }
	void simple_ft( bool const s ){ simple_ft_ = s; }
	void set_ab_fold_tree( core::pose::Pose & pose);
	void two_parts_chain1( bool const t ){ two_parts_chain1_ = t; }
	bool two_parts_chain1() const{ return two_parts_chain1_; }

	core::kinematics::FoldTreeOP fold_tree() const;
	void fold_tree( core::kinematics::FoldTreeOP ft_ );
	char start_tree_at_chain() const{ return start_tree_at_chain_; }
	void start_tree_at_chain( char const c ){ start_tree_at_chain_ = c; }
	void ab_fold_tree(bool b){ab_fold_tree_=b;}
	bool ab_fold_tree(){return ab_fold_tree_;}
private :
	bool docking_ft_, simple_ft_, two_parts_chain1_; //dflt false; false; false; two-parts-chain1 is intended for cases where chain1 has a cut and we want to optimize the jump between part1 and part2 along with the jump between chain1 and chain2
	char start_tree_at_chain_; //dflt ''; if set, start the fold tree in the defined chain, and put all other chains beyond that jump
	core::Size jump_; //dflt true
	std::string resnum_, connect_to_, anchor_res_, connect_from_; //as parsed
	core::Size host_chain_; //dflt 2
	core::kinematics::FoldTreeOP fold_tree_; // dflt NULL; if set just use it without any other options. Reading a foldtree from file parses the fold tree at parse time and then just applies it at apply.
	bool ab_fold_tree_; //dflt false; NOOOOOOOOO. MUST SET BOOLS EXPLICITLY. SILLY C++.  Caught from integration test fail. --rhiju
};

} // movers
} // protein_interface_design
} // protocols


#endif /*INCLUDED_protocols_protein_interface_design_movers_SetAtomTree_HH*/
