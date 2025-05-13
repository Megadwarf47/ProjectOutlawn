///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CurveInfinityType.h>
#include <fb/PropertyTrackData.h>
#include <fb/TransformPart.h>
#include <fb/TransformPartPropertyKey.h>

namespace fb {
	class TransformPartPropertyTrackData : public PropertyTrackData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TransformPartPropertyTrackData"); }
		virtual ~TransformPartPropertyTrackData() override {}
		TransformPartPropertyTrackData() {
			m_resource = ;
			m_transformPart = TransformPart::TransformPart_TranslationX;
			m_preInfinity = CurveInfinityType::CurveInfinityType_Constant;
			m_postInfinity = CurveInfinityType::CurveInfinityType_Constant;
			m_evaluatorFps = 1.f;
			m_keyStartIndex = 0;
			m_keyCount = 0;
			m_weighted = false;
			m_isStatic = false;
		};

		ResourceRef m_resource; // 0x20 (32)
		TransformPart m_transformPart; // 0x28 (40)
		CurveInfinityType m_preInfinity; // 0x2C (44)
		CurveInfinityType m_postInfinity; // 0x30 (48)
		Array<TransformPartPropertyKey> m_values; // 0x38 (56)
		float m_evaluatorFps; // 0x40 (64)
		u32 m_keyStartIndex; // 0x44 (68)
		u32 m_keyCount; // 0x48 (72)
		bool m_weighted; // 0x4C (76)
		bool m_isStatic; // 0x4D (77)
	}; // 0x50 (80)
}

