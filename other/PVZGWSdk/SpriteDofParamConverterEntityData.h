///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>

namespace fb {
	class SpriteDofParamConverterEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SpriteDofParamConverterEntityData"); }
		virtual ~SpriteDofParamConverterEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		SpriteDofParamConverterEntityData() {
			m_spriteDofOutFocusStart = 5.f;
			m_spriteDofOutFocusEnd = 7.f;
			m_spriteDofMaxBlurFactor = 0.25f;
		};

		float m_spriteDofOutFocusStart; // 0x18 (24)
		float m_spriteDofOutFocusEnd; // 0x1C (28)
		float m_spriteDofMaxBlurFactor; // 0x20 (32)
	}; // 0x28 (40)
}

