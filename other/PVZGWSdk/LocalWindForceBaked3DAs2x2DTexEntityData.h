///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/LocalWindForceEntityBaseData.h>
#include <fb/Vec3.h>

namespace fb {
	class TextureAsset;
}

namespace fb {
	class LocalWindForceBaked3DAs2x2DTexEntityData : public LocalWindForceEntityBaseData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("LocalWindForceBaked3DAs2x2DTexEntityData"); }
		virtual ~LocalWindForceBaked3DAs2x2DTexEntityData() override {}
		LocalWindForceBaked3DAs2x2DTexEntityData() {
			m_volumeSliceZXScale = Vec3(1.f, 1.f, 1.f);
			m_volumeSliceZYScale = Vec3(1.f, 1.f, 1.f);
			m_sizeX = 1.f;
			m_sizeY = 1.f;
			m_sizeZ = 1.f;
			m_attenuation = 0.1f;
		};

		Vec3 m_volumeSliceZXScale; // 0x80 (128)
		Vec3 m_volumeSliceZYScale; // 0x90 (144)
		float m_sizeX; // 0xA0 (160)
		float m_sizeY; // 0xA4 (164)
		float m_sizeZ; // 0xA8 (168)
		float m_attenuation; // 0xAC (172)
		CtrRef<TextureAsset> m_volumeSliceZX; // 0xB0 (176)
		CtrRef<TextureAsset> m_volumeSliceZY; // 0xB8 (184)
	}; // 0xC0 (192)
}

