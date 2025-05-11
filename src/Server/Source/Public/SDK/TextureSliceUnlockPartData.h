///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class TextureSliceUnlockPartData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TextureSliceUnlockPartData"); }
		virtual ~TextureSliceUnlockPartData() override {}
		TextureSliceUnlockPartData() {
			m_sliceIndex = 0;
		};

		s32 m_sliceIndex; // 0x10 (16)
	}; // 0x18 (24)
}

