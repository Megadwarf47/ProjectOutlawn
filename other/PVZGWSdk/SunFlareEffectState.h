///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainer.h>
#include <fb/Vec2.h>
#include <fb/Vec4.h>

namespace fb {
	class SurfaceShaderBaseAsset;
}

namespace fb {
	class SunFlareEffectState : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SunFlareEffectState"); }
		virtual ~SunFlareEffectState() override {}
		SunFlareEffectState() {
			m_occluderSize = 500.f;
			m_element1SizeOccluderCurve = Vec4(0.f, 0.f, 0.f, 1.f);
			m_element1SizeScreenPosCurve = Vec4(0.f, 0.f, 0.f, 1.f);
			m_element1AlphaOccluderCurve = Vec4(0.f, 0.f, -1.f, 1.f);
			m_element1AlphaScreenPosCurve = Vec4(0.f, 0.f, 0.f, 1.f);
			m_element2SizeOccluderCurve = Vec4(0.f, 0.f, 0.f, 1.f);
			m_element2SizeScreenPosCurve = Vec4(0.f, 0.f, 0.f, 1.f);
			m_element2AlphaOccluderCurve = Vec4(0.f, 0.f, -1.f, 1.f);
			m_element2AlphaScreenPosCurve = Vec4(0.f, 0.f, 0.f, 1.f);
			m_element3SizeOccluderCurve = Vec4(0.f, 0.f, 0.f, 1.f);
			m_element3SizeScreenPosCurve = Vec4(0.f, 0.f, 0.f, 1.f);
			m_element3AlphaOccluderCurve = Vec4(0.f, 0.f, -1.f, 1.f);
			m_element3AlphaScreenPosCurve = Vec4(0.f, 0.f, 0.f, 1.f);
			m_element4SizeOccluderCurve = Vec4(0.f, 0.f, 0.f, 1.f);
			m_element4SizeScreenPosCurve = Vec4(0.f, 0.f, 0.f, 1.f);
			m_element4AlphaOccluderCurve = Vec4(0.f, 0.f, -1.f, 1.f);
			m_element4AlphaScreenPosCurve = Vec4(0.f, 0.f, 0.f, 1.f);
			m_element5SizeOccluderCurve = Vec4(0.f, 0.f, 0.f, 1.f);
			m_element5SizeScreenPosCurve = Vec4(0.f, 0.f, 0.f, 1.f);
			m_element5AlphaOccluderCurve = Vec4(0.f, 0.f, -1.f, 1.f);
			m_element5AlphaScreenPosCurve = Vec4(0.f, 0.f, 0.f, 1.f);
			m_element1RayDistance = 0.f;
			m_element1Size = Vec2(0.25f, 0.25f);
			m_element2RayDistance = 0.f;
			m_element2Size = Vec2(0.25f, 0.25f);
			m_element3RayDistance = 0.f;
			m_element3Size = Vec2(0.25f, 0.25f);
			m_element4RayDistance = 0.f;
			m_element4Size = Vec2(0.25f, 0.25f);
			m_element5RayDistance = 0.f;
			m_element5Size = Vec2(0.25f, 0.25f);
			m_enable = false;
			m_debugDrawOccluder = false;
			m_element1Enable = false;
			m_element2Enable = false;
			m_element3Enable = false;
			m_element4Enable = false;
			m_element5Enable = false;
		};

		float m_occluderSize; // 0x10 (16)
		CtrRef<SurfaceShaderBaseAsset> m_element1Shader; // 0x18 (24)
		Vec4 m_element1SizeOccluderCurve; // 0x20 (32)
		Vec4 m_element1SizeScreenPosCurve; // 0x30 (48)
		Vec4 m_element1AlphaOccluderCurve; // 0x40 (64)
		Vec4 m_element1AlphaScreenPosCurve; // 0x50 (80)
		Vec4 m_element2SizeOccluderCurve; // 0x60 (96)
		Vec4 m_element2SizeScreenPosCurve; // 0x70 (112)
		Vec4 m_element2AlphaOccluderCurve; // 0x80 (128)
		Vec4 m_element2AlphaScreenPosCurve; // 0x90 (144)
		Vec4 m_element3SizeOccluderCurve; // 0xA0 (160)
		Vec4 m_element3SizeScreenPosCurve; // 0xB0 (176)
		Vec4 m_element3AlphaOccluderCurve; // 0xC0 (192)
		Vec4 m_element3AlphaScreenPosCurve; // 0xD0 (208)
		Vec4 m_element4SizeOccluderCurve; // 0xE0 (224)
		Vec4 m_element4SizeScreenPosCurve; // 0xF0 (240)
		Vec4 m_element4AlphaOccluderCurve; // 0x100 (256)
		Vec4 m_element4AlphaScreenPosCurve; // 0x110 (272)
		Vec4 m_element5SizeOccluderCurve; // 0x120 (288)
		Vec4 m_element5SizeScreenPosCurve; // 0x130 (304)
		Vec4 m_element5AlphaOccluderCurve; // 0x140 (320)
		Vec4 m_element5AlphaScreenPosCurve; // 0x150 (336)
		float m_element1RayDistance; // 0x160 (352)
		Vec2 m_element1Size; // 0x164 (356)
		CtrRef<SurfaceShaderBaseAsset> m_element2Shader; // 0x170 (368)
		float m_element2RayDistance; // 0x178 (376)
		Vec2 m_element2Size; // 0x17C (380)
		CtrRef<SurfaceShaderBaseAsset> m_element3Shader; // 0x188 (392)
		float m_element3RayDistance; // 0x190 (400)
		Vec2 m_element3Size; // 0x194 (404)
		CtrRef<SurfaceShaderBaseAsset> m_element4Shader; // 0x1A0 (416)
		float m_element4RayDistance; // 0x1A8 (424)
		Vec2 m_element4Size; // 0x1AC (428)
		CtrRef<SurfaceShaderBaseAsset> m_element5Shader; // 0x1B8 (440)
		float m_element5RayDistance; // 0x1C0 (448)
		Vec2 m_element5Size; // 0x1C4 (452)
		bool m_enable; // 0x1CC (460)
		bool m_debugDrawOccluder; // 0x1CD (461)
		bool m_element1Enable; // 0x1CE (462)
		bool m_element2Enable; // 0x1CF (463)
		bool m_element3Enable; // 0x1D0 (464)
		bool m_element4Enable; // 0x1D1 (465)
		bool m_element5Enable; // 0x1D2 (466)
	}; // 0x1E0 (480)
}

