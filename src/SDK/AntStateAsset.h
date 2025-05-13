///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>

namespace fb {
	class AntStateAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AntStateAsset"); }
		virtual ~AntStateAsset() override {}
		AntStateAsset() {
			m_chunkSize = 0;
		};

		Guid m_streamingGuid; // 0x18 (24)
		s32 m_chunkSize; // 0x28 (40)
	}; // 0x30 (48)
}

