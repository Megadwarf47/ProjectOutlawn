///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/Realm.h>
#include <fb/Vec2.h>
#include <fb/Vec4.h>
#include <fb/VisualEnvironmentComponentData.h>

namespace fb {
	class SurfaceShaderBaseAsset;
}

namespace fb {
	class SunFlareComponentData : public VisualEnvironmentComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SunFlareComponentData"); }
		virtual ~SunFlareComponentData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		SunFlareComponentData() {
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
			m_realm = Realm::Realm_Client;
			m_occluderSize = 500.f;
			m_element1RayDistance = 0.f;
			m_element1Size = Vec2(0.25f, 0.25f);
			m_element1RotationLocal = 0.f;
			m_element1RotationDistMultiplier = 1.f;
			m_element2RayDistance = 0.f;
			m_element2Size = Vec2(0.25f, 0.25f);
			m_element2RotationLocal = 0.f;
			m_element2RotationDistMultiplier = 1.f;
			m_element3RayDistance = 0.f;
			m_element3Size = Vec2(0.25f, 0.25f);
			m_element3RotationLocal = 0.f;
			m_element3RotationDistMultiplier = 1.f;
			m_element4RayDistance = 0.f;
			m_element4Size = Vec2(0.25f, 0.25f);
			m_element4RotationLocal = 0.f;
			m_element4RotationDistMultiplier = 1.f;
			m_element5RayDistance = 0.f;
			m_element5Size = Vec2(0.25f, 0.25f);
			m_element5RotationLocal = 0.f;
			m_element5RotationDistMultiplier = 1.f;
			m_enable = false;
			m_debugDrawOccluder = false;
			m_element1Enable = false;
			m_element1RotationAlignedToRay = false;
			m_element2Enable = false;
			m_element2RotationAlignedToRay = false;
			m_element3Enable = false;
			m_element3RotationAlignedToRay = false;
			m_element4Enable = false;
			m_element4RotationAlignedToRay = false;
			m_element5Enable = false;
			m_element5RotationAlignedToRay = false;
		};

		Vec4 m_element1SizeOccluderCurve; // 0x80 (128)
		Vec4 m_element1SizeScreenPosCurve; // 0x90 (144)
		Vec4 m_element1AlphaOccluderCurve; // 0xA0 (160)
		Vec4 m_element1AlphaScreenPosCurve; // 0xB0 (176)
		Vec4 m_element1RotationDistCurve; // 0xC0 (192)
		Vec4 m_element2SizeOccluderCurve; // 0xD0 (208)
		Vec4 m_element2SizeScreenPosCurve; // 0xE0 (224)
		Vec4 m_element2AlphaOccluderCurve; // 0xF0 (240)
		Vec4 m_element2AlphaScreenPosCurve; // 0x100 (256)
		Vec4 m_element2RotationDistCurve; // 0x110 (272)
		Vec4 m_element3SizeOccluderCurve; // 0x120 (288)
		Vec4 m_element3SizeScreenPosCurve; // 0x130 (304)
		Vec4 m_element3AlphaOccluderCurve; // 0x140 (320)
		Vec4 m_element3AlphaScreenPosCurve; // 0x150 (336)
		Vec4 m_element3RotationDistCurve; // 0x160 (352)
		Vec4 m_element4SizeOccluderCurve; // 0x170 (368)
		Vec4 m_element4SizeScreenPosCurve; // 0x180 (384)
		Vec4 m_element4AlphaOccluderCurve; // 0x190 (400)
		Vec4 m_element4AlphaScreenPosCurve; // 0x1A0 (416)
		Vec4 m_element4RotationDistCurve; // 0x1B0 (432)
		Vec4 m_element5SizeOccluderCurve; // 0x1C0 (448)
		Vec4 m_element5SizeScreenPosCurve; // 0x1D0 (464)
		Vec4 m_element5AlphaOccluderCurve; // 0x1E0 (480)
		Vec4 m_element5AlphaScreenPosCurve; // 0x1F0 (496)
		Vec4 m_element5RotationDistCurve; // 0x200 (512)
		Realm m_realm; // 0x210 (528)
		float m_occluderSize; // 0x214 (532)
		CtrRef<SurfaceShaderBaseAsset> m_element1Shader; // 0x218 (536)
		float m_element1RayDistance; // 0x220 (544)
		Vec2 m_element1Size; // 0x224 (548)
		float m_element1RotationLocal; // 0x22C (556)
		float m_element1RotationDistMultiplier; // 0x230 (560)
		CtrRef<SurfaceShaderBaseAsset> m_element2Shader; // 0x238 (568)
		float m_element2RayDistance; // 0x240 (576)
		Vec2 m_element2Size; // 0x244 (580)
		float m_element2RotationLocal; // 0x24C (588)
		float m_element2RotationDistMultiplier; // 0x250 (592)
		CtrRef<SurfaceShaderBaseAsset> m_element3Shader; // 0x258 (600)
		float m_element3RayDistance; // 0x260 (608)
		Vec2 m_element3Size; // 0x264 (612)
		float m_element3RotationLocal; // 0x26C (620)
		float m_element3RotationDistMultiplier; // 0x270 (624)
		CtrRef<SurfaceShaderBaseAsset> m_element4Shader; // 0x278 (632)
		float m_element4RayDistance; // 0x280 (640)
		Vec2 m_element4Size; // 0x284 (644)
		float m_element4RotationLocal; // 0x28C (652)
		float m_element4RotationDistMultiplier; // 0x290 (656)
		CtrRef<SurfaceShaderBaseAsset> m_element5Shader; // 0x298 (664)
		float m_element5RayDistance; // 0x2A0 (672)
		Vec2 m_element5Size; // 0x2A4 (676)
		float m_element5RotationLocal; // 0x2AC (684)
		float m_element5RotationDistMultiplier; // 0x2B0 (688)
		bool m_enable; // 0x2B4 (692)
		bool m_debugDrawOccluder; // 0x2B5 (693)
		bool m_element1Enable; // 0x2B6 (694)
		bool m_element1RotationAlignedToRay; // 0x2B7 (695)
		bool m_element2Enable; // 0x2B8 (696)
		bool m_element2RotationAlignedToRay; // 0x2B9 (697)
		bool m_element3Enable; // 0x2BA (698)
		bool m_element3RotationAlignedToRay; // 0x2BB (699)
		bool m_element4Enable; // 0x2BC (700)
		bool m_element4RotationAlignedToRay; // 0x2BD (701)
		bool m_element5Enable; // 0x2BE (702)
		bool m_element5RotationAlignedToRay; // 0x2BF (703)
	}; // 0x2C0 (704)
}

