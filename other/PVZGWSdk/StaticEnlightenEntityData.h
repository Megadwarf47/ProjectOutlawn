///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/EnlightenEntityData.h>

namespace fb {
	class EnlightenDataAsset;
	class ObjectBlueprint;
	class StaticEnlightenData;
}

namespace fb {
	class StaticEnlightenEntityData : public EnlightenEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("StaticEnlightenEntityData"); }
		virtual ~StaticEnlightenEntityData() override {}
		StaticEnlightenEntityData() {
		};

		CtrRef<StaticEnlightenData> m_enlightenData; // 0x28 (40)
		CtrRef<EnlightenDataAsset> m_dynamicEnlightenData; // 0x30 (48)
		CtrRef<ObjectBlueprint> m_visualEnvironment; // 0x38 (56)
	}; // 0x40 (64)
}

