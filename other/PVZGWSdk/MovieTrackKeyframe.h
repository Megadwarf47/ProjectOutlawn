///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainer.h>

namespace fb {
	class MovieTextureAsset;
}

namespace fb {
	class MovieTrackKeyframe : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MovieTrackKeyframe"); }
		virtual ~MovieTrackKeyframe() override {}
		MovieTrackKeyframe() {
			m_time = 0.f;
			m_length = 0.f;
		};

		float m_time; // 0x10 (16)
		float m_length; // 0x14 (20)
		CtrRef<MovieTextureAsset> m_movie; // 0x18 (24)
	}; // 0x20 (32)
}

