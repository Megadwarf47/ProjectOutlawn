///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Asset.h>
#include <fb/RefArray.h>

namespace fb {
	class DataContainer;
}

namespace fb {
	class HavokAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("HavokAsset"); }
		virtual ~HavokAsset() override {}
		HavokAsset() {
			m_resource = ;
		};

		Array<s32> m_numShapeKeysInContactPointProperties; // 0x18 (24)
		ResourceRef m_resource; // 0x20 (32)
		RefArray<DataContainer> m_externalAssets; // 0x28 (40)
	}; // 0x30 (48)
}

