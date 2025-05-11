///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BlockAimAssistData.h>
#include <fb/SpatialEntityData.h>

namespace fb {
	class BlockAimAssistEntityData : public SpatialEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BlockAimAssistEntityData"); }
		virtual ~BlockAimAssistEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		BlockAimAssistEntityData() {
		};

		BlockAimAssistData m_blockData; // 0x60 (96)
	}; // 0x70 (112)
}

