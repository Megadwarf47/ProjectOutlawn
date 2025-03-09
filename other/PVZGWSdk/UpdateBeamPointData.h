///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/LocationSelection.h>
#include <fb/ParamOverrideSelection.h>
#include <fb/ProcessorData.h>
#include <fb/Vec4.h>

namespace fb {
	class UpdateBeamPointData : public ProcessorData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UpdateBeamPointData"); }
		virtual ~UpdateBeamPointData() override {}
		UpdateBeamPointData() {
			m_numPoints = 1;
			m_attractor = LocationSelection::LsParticle;
			m_paramOverride = ParamOverrideSelection::ParamOverride_None;
			m_taperCoefficients = Vec4(0.f, 0.f, 0.f, 1.f);
			m_paramCoefficients = Vec4(0.f, 0.f, 1.f, 0.f);
		};

		u32 m_numPoints; // 0x28 (40)
		LocationSelection m_attractor; // 0x2C (44)
		ParamOverrideSelection m_paramOverride; // 0x30 (48)
		Vec4 m_taperCoefficients; // 0x40 (64)
		Vec4 m_attractorCoefficients; // 0x50 (80)
		Vec4 m_paramCoefficients; // 0x60 (96)
	}; // 0x70 (112)
}

