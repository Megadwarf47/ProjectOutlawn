///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/EntityData.h>
#include <fb/Realm.h>

namespace fb {
	class NuiSpeechGrammarAsset;
}

namespace fb {
	class GrammarStateEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("GrammarStateEntityData"); }
		virtual ~GrammarStateEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		GrammarStateEntityData() {
			m_realm = Realm::Realm_Client;
			m_startEnabled = false;
		};

		Realm m_realm; // 0x18 (24)
		CtrRef<NuiSpeechGrammarAsset> m_grammar; // 0x20 (32)
		bool m_startEnabled; // 0x28 (40)
	}; // 0x30 (48)
}

