///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/EntityData.h>

namespace fb {
	class SchematicChannelAsset;
}

namespace fb {
	class SchematicChannelEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SchematicChannelEntityData"); }
		virtual ~SchematicChannelEntityData() override {}
		SchematicChannelEntityData() {
		};

		CtrRef<SchematicChannelAsset> m_schematicChannel; // 0x18 (24)
	}; // 0x20 (32)
}

