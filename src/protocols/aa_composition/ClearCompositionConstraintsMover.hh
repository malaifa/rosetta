// -*- mode:c++;tab-width:2;indent-tabs-mode:t;show-trailing-whitespace:t;rm-trailing-spaces:t -*-
// vi: set ts=2 noet:
//
// (c) Copyright Rosetta Commons Member Institutions.
// (c) This file is part of the Rosetta software suite and is made available under license.
// (c) The Rosetta software is developed by the contributing members of the Rosetta Commons.
// (c) For more information, see http://www.rosettacommons.org. Questions about this can be
// (c) addressed to University of Washington UW TechTransfer, email: license@u.washington.edu.

/// @file protocols/aa_composition/ClearCompositionConstraintsMover.hh
/// @brief Headers for the ClearCompositionConstraintsMover.
/// @details Clears all AACompositionConstraints from a pose.
/// @author Vikram K. Mulligan (vmullig@uw.edu)

#ifndef INCLUDED_protocols_aa_composition_ClearCompositionConstraintsMover_hh
#define INCLUDED_protocols_aa_composition_ClearCompositionConstraintsMover_hh

#include <protocols/aa_composition/ClearCompositionConstraintsMover.fwd.hh>
#include <core/scoring/aa_composition_energy/AACompositionConstraint.fwd.hh>
#include <core/select/residue_selector/ResidueSelector.fwd.hh>
#include <protocols/moves/Mover.hh>

#include <core/scoring/constraints/ConstraintSet.fwd.hh>

#include <protocols/filters/Filter.fwd.hh>

#include <utility/vector1.hh>


namespace protocols {
namespace aa_composition {

class ClearCompositionConstraintsMover : public protocols::moves::Mover {

public:
	typedef core::scoring::constraints::ConstraintSet ConstraintSet;
	typedef core::scoring::constraints::ConstraintSetOP ConstraintSetOP;
	typedef core::scoring::constraints::ConstraintSetCOP ConstraintSetCOP;

public:
	/// @brief Constructor.
	///
	ClearCompositionConstraintsMover();

	/// @brief Copy Constructor.
	///
	ClearCompositionConstraintsMover( ClearCompositionConstraintsMover const &src );

	/// @brief Destructor.
	///
	virtual ~ClearCompositionConstraintsMover();

	/// @brief Copy this object and return a pointer to the copy.
	///
	virtual protocols::moves::MoverOP clone() const;

	/// @brief Create a new object of this type and return a pointer to it.
	///
	virtual protocols::moves::MoverOP fresh_instance() const;

	/// @brief Returns the name of this mover ("ClearCompositionConstraintsMover").
	///
	virtual std::string get_name() const;

	/// @brief Actually apply the mover to a pose.
	///
	virtual void apply( Pose & );

	/// @brief Parse RosettaScripts XML tag to set up the mover.
	///
	virtual void
	parse_my_tag( TagCOP tag, basic::datacache::DataMap &data_map, Filters_map const &filters_map, protocols::moves::Movers_map const &movers_map, Pose const &pose );

private:
	//Private member variables:

};

} // aa_composition
} // protocols

#endif
