//////////////////////////////////////////////////////////////////////////////////
// SPARK particle engine														//
// Copyright (C) 2008-2009 - Julien Fryer - julienfryer@gmail.com				//
//																				//
// This software is provided 'as-is', without any express or implied			//
// warranty.  In no event will the authors be held liable for any damages		//
// arising from the use of this software.										//
//																				//
// Permission is granted to anyone to use this software for any purpose,		//
// including commercial applications, and to alter it and redistribute it		//
// freely, subject to the following restrictions:								//
//																				//
// 1. The origin of this software must not be misrepresented; you must not		//
//    claim that you wrote the original software. If you use this software		//
//    in a product, an acknowledgment in the product documentation would be		//
//    appreciated but is not required.											//
// 2. Altered source versions must be plainly marked as such, and must not be	//
//    misrepresented as being the original software.							//
// 3. This notice may not be removed or altered from any source distribution.	//
//////////////////////////////////////////////////////////////////////////////////


#include "RenderingAPIs/DX9/SPK_DX9BufferHandler.h"

namespace SPK
{
namespace DX9
{
	bool DX9BufferHandler::DX9PrepareBuffers(const Group& group)
	{
//		std::cout << "DX9BufferHandler::DX9PrepareBuffers" << std::endl;
		if(!DX9CheckBuffers(group))
		{
//			std::cout << "DX9CheckBuffers echec" << std::endl;
			//if (isBuffersCreationEnabled())
			{
				DX9DestroyBuffers(group);
				if( !DX9CreateBuffers(group) )
				{
//					std::cout << "DX9CreateBuffers echec" << std::endl;
					return false;
				}
				return true;
			}
			//return false;
		}
		return true;
	}
}}
