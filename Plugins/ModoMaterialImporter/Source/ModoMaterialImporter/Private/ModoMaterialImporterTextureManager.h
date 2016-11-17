/*
 *   Copyright 2016 The Foundry Visionmongers Ltd.
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 */

#pragma once

#include "LevelEditor.h"

#include "SlateBasics.h"
#include "SlateExtras.h"

namespace ModoMaterial
{
	enum class ColorSpace {sRGB, Linear};

	class TextureManager
	{
	public:

		static TextureManager* Instance();
		UTexture* LoadTexture (const FString& TextureFilename, const FString& path, const FString& rootPath, bool isSRGB, TextureCompressionSettings compSetting);

	private:

		TextureManager();
		~TextureManager();
	};
}