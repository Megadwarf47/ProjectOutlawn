///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/EntityTrackBaseData.h>

namespace fb {
	class GameObjectData;
}

namespace fb {
	class EntityTrackData : public EntityTrackBaseData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EntityTrackData"); }
		virtual ~EntityTrackData() override {}
		EntityTrackData() {
		};

		CtrRef<GameObjectData> m_linkedEntityData; // 0x38 (56)
	}; // 0x40 (64)
}

