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
}

namespace fb {
	class DynamicEnlightenEntityData : public EnlightenEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DynamicEnlightenEntityData"); }
		virtual ~DynamicEnlightenEntityData() override {}
		DynamicEnlightenEntityData() {
		};

		CtrRef<EnlightenDataAsset> m_enlightenData; // 0x28 (40)
	}; // 0x30 (48)
}

