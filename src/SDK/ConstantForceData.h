///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ForceCondition.h>
#include <fb/ForceType.h>
#include <fb/SpaceType.h>
#include <fb/Vec3.h>

namespace fb {
	struct ConstantForceData {
		ConstantForceData() {
			m_condition = ForceCondition::FCNever;
			m_typeOfForce = ForceType::FTForce;
			m_space = SpaceType::STBody;
		};

		Vec3 m_value; // 0x0 (0)
		ForceCondition m_condition; // 0x10 (16)
		ForceType m_typeOfForce; // 0x14 (20)
		SpaceType m_space; // 0x18 (24)
	}; // 0x20 (32)
}

