///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/EvaluatorData.h>
#include <fb/Vec2.h>
#include <fb/Vec3.h>
#include <fb/Vec4.h>

namespace fb {
	class SampleTextureData : public EvaluatorData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SampleTextureData"); }
		virtual ~SampleTextureData() override {}
		SampleTextureData() {
			m_colorIntensityMax = Vec3(1.f, 1.f, 1.f);
			m_colorIntensityMin = Vec3(1.f, 1.f, 1.f);
			m_textureOriginU = 0.f;
			m_textureOriginV = 0.f;
		};

		Array<Vec4> m_gradientData; // 0x18 (24)
		Vec3 m_colorIntensityMax; // 0x20 (32)
		Vec3 m_colorIntensityMin; // 0x30 (48)
		Vec2 m_textureDimensions; // 0x40 (64)
		float m_textureOriginU; // 0x48 (72)
		float m_textureOriginV; // 0x4C (76)
	}; // 0x50 (80)
}

