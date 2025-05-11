///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AntRef.h>
#include <fb/Array.h>
#include <fb/DataContainer.h>
#include <fb/FaceAnimationWaveMapping.h>

namespace fb {
	class FaceAnimationWaveMappings : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("FaceAnimationWaveMappings"); }
		virtual ~FaceAnimationWaveMappings() override {}
		FaceAnimationWaveMappings() {
		};

		AntRef m_antAsset; // 0x10 (16)
		AntRef m_onStartedTalking; // 0x24 (36)
		Array<FaceAnimationWaveMapping> m_mappings; // 0x38 (56)
	}; // 0x40 (64)
}

