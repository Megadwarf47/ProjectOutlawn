///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ReferenceObjectData.h>

namespace fb {
	class EffectReferenceObjectData : public ReferenceObjectData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EffectReferenceObjectData"); }
		virtual ~EffectReferenceObjectData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		EffectReferenceObjectData() {
			m_autoStart = true;
		};

		bool m_autoStart; // 0x80 (128)
	}; // 0x90 (144)
}

