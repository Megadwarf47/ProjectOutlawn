///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/RefArray.h>

namespace fb {
	class StreamPoolSetup;
}

namespace fb {
	class StreamPoolAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("StreamPoolAsset"); }
		virtual ~StreamPoolAsset() override {}
		StreamPoolAsset() {
			m_streamPoolId = 0;
		};

		u32 m_streamPoolId; // 0x18 (24)
		RefArray<StreamPoolSetup> m_setups; // 0x20 (32)
	}; // 0x28 (40)
}

