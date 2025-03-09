///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/EmitterExclusionVolume.h>
#include <fb/EmitterExclusionVolumeBoundingSphereSoA.h>
#include <fb/SubWorldDataComponent.h>

namespace fb {
	class EmitterSystemComponent : public SubWorldDataComponent {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EmitterSystemComponent"); }
		virtual ~EmitterSystemComponent() override {}
		EmitterSystemComponent() {
			m_exclusionVolumesCount = 0;
		};

		u32 m_exclusionVolumesCount; // 0x10 (16)
		Array<EmitterExclusionVolume> m_exclusionVolumes; // 0x18 (24)
		Array<EmitterExclusionVolumeBoundingSphereSoA> m_exclusionVolumeBoundingSpheres; // 0x20 (32)
	}; // 0x28 (40)
}

