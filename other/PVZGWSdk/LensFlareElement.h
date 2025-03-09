///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/Types.h>
#include <fb/Vec2.h>
#include <fb/Vec4.h>

namespace fb {
	class SurfaceShaderBaseAsset;
}

namespace fb {
	struct LensFlareElement {
		LensFlareElement() {
			m_sizeOccluderCurve = Vec4(0.f, 0.f, 0.f, 1.f);
			m_sizeScreenPosCurve = Vec4(0.f, 0.f, 0.f, 1.f);
			m_sizeAngleCurve = Vec4(0.f, 0.f, 0.f, 1.f);
			m_sizeCamDistCurve = Vec4(0.f, 0.f, 0.f, 1.f);
			m_alphaOccluderCurve = Vec4(0.f, 0.f, -1.f, 1.f);
			m_alphaScreenPosCurve = Vec4(0.f, 0.f, 0.f, 1.f);
			m_alphaAngleCurve = Vec4(0.f, 0.f, 0.f, 1.f);
			m_alphaCamDistCurve = Vec4(0.f, 0.f, 0.f, 1.f);
			m_rayDistance = 0.f;
			m_size = Vec2(0.25f, 0.25f);
			m_sizeCamDistMax = 100.f;
			m_alphaCamDistMax = 100.f;
			m_rotationLocal = 0.f;
			m_rotationDistMultiplier = 1.f;
			m_rotationAlignedToRay = false;
		};

		Vec4 m_sizeOccluderCurve; // 0x0 (0)
		Vec4 m_sizeScreenPosCurve; // 0x10 (16)
		Vec4 m_sizeAngleCurve; // 0x20 (32)
		Vec4 m_sizeCamDistCurve; // 0x30 (48)
		Vec4 m_alphaOccluderCurve; // 0x40 (64)
		Vec4 m_alphaScreenPosCurve; // 0x50 (80)
		Vec4 m_alphaAngleCurve; // 0x60 (96)
		Vec4 m_alphaCamDistCurve; // 0x70 (112)
		Vec4 m_rotationDistCurve; // 0x80 (128)
		CtrRef<SurfaceShaderBaseAsset> m_shader; // 0x90 (144)
		float m_rayDistance; // 0x98 (152)
		Vec2 m_size; // 0x9C (156)
		float m_sizeCamDistMax; // 0xA4 (164)
		float m_alphaCamDistMax; // 0xA8 (168)
		float m_rotationLocal; // 0xAC (172)
		float m_rotationDistMultiplier; // 0xB0 (176)
		bool m_rotationAlignedToRay; // 0xB4 (180)
	}; // 0xC0 (192)
}

