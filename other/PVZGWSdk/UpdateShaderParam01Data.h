///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ProcessorData.h>
#include <fb/Vec4.h>

namespace fb {
	class UpdateShaderParam01Data : public ProcessorData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UpdateShaderParam01Data"); }
		virtual ~UpdateShaderParam01Data() override {}
		UpdateShaderParam01Data() {
			m_spawnValueMin = 0.f;
			m_spawnValueMax = 1.f;
			m_enableRandomSpawnValue = false;
			m_defaultValues = Vec4(1.f, 0.f, 0.f, 0.f);
		};

		float m_spawnValueMin; // 0x28 (40)
		float m_spawnValueMax; // 0x2C (44)
		bool m_enableRandomSpawnValue; // 0x30 (48)
		Vec4 m_defaultValues; // 0x40 (64)
	}; // 0x50 (80)
}

