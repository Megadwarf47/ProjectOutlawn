///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Blueprint.h>
#include <fb/CtrRef.h>

namespace fb {
	class GameObjectData;
}

namespace fb {
	class ObjectBlueprint : public Blueprint {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ObjectBlueprint"); }
		virtual ~ObjectBlueprint() override {}
		ObjectBlueprint() {
		};

		CtrRef<GameObjectData> m_object; // 0x40 (64)
	}; // 0x48 (72)
}

