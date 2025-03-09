///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EmitterCollisionMethod.h>
#include <fb/EmitterCollisionPriority.h>
#include <fb/ProcessorData.h>

namespace fb {
	class UpdateCollisionData : public ProcessorData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UpdateCollisionData"); }
		virtual ~UpdateCollisionData() override {}
		UpdateCollisionData() {
			m_restitution = 1.f;
			m_reflectionBias = 0.f;
			m_restSpeedThreshold = 0.f;
			m_randomness = 0.f;
			m_method = EmitterCollisionMethod::EmitterCollisionMethod_RayCast;
			m_priority = EmitterCollisionPriority::EmitterCollisionPriority_Medium;
		};

		float m_restitution; // 0x28 (40)
		float m_reflectionBias; // 0x2C (44)
		float m_restSpeedThreshold; // 0x30 (48)
		float m_randomness; // 0x34 (52)
		EmitterCollisionMethod m_method; // 0x38 (56)
		EmitterCollisionPriority m_priority; // 0x3C (60)
	}; // 0x40 (64)
}

