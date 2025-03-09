///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/Realm.h>
#include <fb/VisualEnvironmentComponentData.h>

namespace fb {
	class TextureAsset;
}

namespace fb {
	class DebugComponentData : public VisualEnvironmentComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DebugComponentData"); }
		virtual ~DebugComponentData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		DebugComponentData() {
			m_realm = Realm::Realm_Client;
			m_enable = true;
			m_fullscreen = false;
		};

		Realm m_realm; // 0x80 (128)
		CtrRef<TextureAsset> m_debugTexture; // 0x88 (136)
		bool m_enable; // 0x90 (144)
		bool m_fullscreen; // 0x91 (145)
	}; // 0xA0 (160)
}

