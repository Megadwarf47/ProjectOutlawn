///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/RepulsionConstraintMode.h>

namespace fb {
	class PuppetTune : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PuppetTune"); }
		virtual ~PuppetTune() override {}
		PuppetTune() {
			m_repulsionConstraintMode = RepulsionConstraintMode::NOT_PUSHABLE;
			m_exitPuppetInObstacles = false;
		};

		RepulsionConstraintMode m_repulsionConstraintMode; // 0x18 (24)
		bool m_exitPuppetInObstacles; // 0x1C (28)
	}; // 0x20 (32)
}

