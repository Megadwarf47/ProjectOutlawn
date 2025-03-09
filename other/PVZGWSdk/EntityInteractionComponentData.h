///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameComponentData.h>
#include <fb/RefArray.h>

namespace fb {
	class InteractionData;
}

namespace fb {
	class EntityInteractionComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EntityInteractionComponentData"); }
		virtual ~EntityInteractionComponentData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		EntityInteractionComponentData() {
		};

		RefArray<InteractionData> m_interactions; // 0x70 (112)
	}; // 0x80 (128)
}

