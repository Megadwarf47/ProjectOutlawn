///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BlockAimAssistData.h>
#include <fb/GameComponentData.h>

namespace fb {
	class BlockAimAssistComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BlockAimAssistComponentData"); }
		virtual ~BlockAimAssistComponentData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		BlockAimAssistComponentData() {
		};

		BlockAimAssistData m_blockData; // 0x70 (112)
	}; // 0x80 (128)
}

