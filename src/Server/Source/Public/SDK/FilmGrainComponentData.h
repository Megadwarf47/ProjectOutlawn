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
#include <fb/Vec3.h>
#include <fb/VisualEnvironmentComponentData.h>

namespace fb {
	class TextureAsset;
}

namespace fb {
	class FilmGrainComponentData : public VisualEnvironmentComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("FilmGrainComponentData"); }
		virtual ~FilmGrainComponentData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		FilmGrainComponentData() {
			m_colorScale = Vec3(0.1f, 0.1f, 0.1f);
			m_realm = Realm::Realm_Client;
			m_textureScale = Vec2(1.f, 1.f);
			m_enable = false;
			m_linearFilteringEnable = false;
			m_randomEnable = true;
		};

		Vec3 m_colorScale; // 0x80 (128)
		Realm m_realm; // 0x90 (144)
		Vec2 m_textureScale; // 0x94 (148)
		CtrRef<TextureAsset> m_texture; // 0xA0 (160)
		bool m_enable; // 0xA8 (168)
		bool m_linearFilteringEnable; // 0xA9 (169)
		bool m_randomEnable; // 0xAA (170)
	}; // 0xB0 (176)
}

