// -*- mode:c++;tab-width:2;indent-tabs-mode:t;show-trailing-whitespace:t;rm-trailing-spaces:t -*-
// vi: set ts=2 noet:
//
// (c) Copyright Rosetta Commons Member Institutions.
// (c) This file is part of the Rosetta software suite and is made available under license.
// (c) The Rosetta software is developed by the contributing members of the Rosetta Commons.
// (c) For more information, see http://www.rosettacommons.org. Questions about this can be
// (c) addressed to University of Washington UW TechTransfer, email: license@u.washington.edu.

/// @file

#ifndef INCLUDED_protocols_electron_density_ReportFSC_hh
#define INCLUDED_protocols_electron_density_ReportFSC_hh

#include <protocols/moves/Mover.hh>
#include <core/pack/task/TaskFactory.fwd.hh>
#include <core/id/AtomID.hh>
#include <core/id/AtomID_Map.hh>

#include <core/scoring/ScoreFunction.hh>
#include <core/scoring/electron_density/ElectronDensity.hh>

#include <core/optimization/Multifunc.hh>
#include <core/optimization/Minimizer.hh>

namespace protocols {
namespace electron_density {


/// scale density map intensities to match a pose's
class ReportFSC : public moves::Mover {
public:
	ReportFSC();
	virtual ~ReportFSC() {}

	void init();

	virtual void apply( core::pose::Pose & );

	std::string get_name() const { return "ReportFSC"; }

	moves::MoverOP clone() const { return moves::MoverOP( new ReportFSC( *this ) ); }
	moves::MoverOP fresh_instance() const { return moves::MoverOP( new ReportFSC ); }

	virtual void
	parse_my_tag( TagCOP, basic::datacache::DataMap &, Filters_map const &, moves::Movers_map const &, Pose const & );

private:
	core::Real res_low_, res_high_;
	core::Size nresbins_;
	bool asymm_only_, bin_squared_, mask_;

	core::scoring::electron_density::ElectronDensityOP testmap_;
};

} // moves
} // protocols

#endif
