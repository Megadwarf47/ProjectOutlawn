///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/LocalWindForceComponentBaseData.h>
#include <fb/Vec3.h>

namespace fb {
	class TextureAsset;
}

namespace fb {
	class LocalWindForceBaked3DAs2x2DTexComponentData : public LocalWindForceComponentBaseData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("LocalWindForceBaked3DAs2x2DTexComponentData"); }
		virtual ~LocalWindForceBaked3DAs2x2DTexComponentData() override {}
		LocalWindForceBaked3DAs2x2DTexComponentData() {
			m_volumeSliceZXScale = Vec3(1.f, 1.f, 1.f);
			m_volumeSliceZYScale = Vec3(1.f, 1.f, 1.f);
			m_sizeX = 1.f;
			m_sizeY = 1.f;
			m_sizeZ = 1.f;
			m_attenuation = 0.1f;
		};

		Vec3 m_volumeSliceZXScale; // 0x90 (144)
		Vec3 m_volumeSliceZYScale; // 0xA0 (160)
		float m_sizeX; // 0xB0 (176)
		float m_sizeY; // 0xB4 (180)
		float m_sizeZ; // 0xB8 (184)
		float m_attenuation; // 0xBC (188)
		CtrRef<TextureAsset> m_volumeSliceZX; // 0xC0 (192)
		CtrRef<TextureAsset> m_volumeSliceZY; // 0xC8 (200)
	}; // 0xD0 (208)
}

