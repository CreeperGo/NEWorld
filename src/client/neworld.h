/*
* NEWorld: A free game with similar rules to Minecraft.
* Copyright (C) 2016 NEWorld Team
*
* This file is part of NEWorld.
* NEWorld is free software: you can redistribute it and/or modify
* it under the terms of the GNU Lesser General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* NEWorld is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU Lesser General Public License for more details.
*
* You should have received a copy of the GNU Lesser General Public License
* along with NEWorld.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef NEWORLD_H_
#define NEWORLD_H_

#include <common.h>
#include "network.h"
#include <thread>
#include <uilib.h>
#include <world.h>
#include <logger.h>
#include <pluginapi.h>
#include <blockmanager.h>
#include <worldmanager.h>
#include <pluginmanager.h>
#include "../server/worldloader.h"

class Application :public UI::Core::Application
{
public:
    Application(int width, int height, const string& title, const string& path);
    void beforeLaunch() override;
    void afterLaunch() override;
    void onTerminate() override;

private:
    int m_width, m_height;
    string m_title;

    // Blocks
    BlockManager m_blocks;
    // Loaded plugins
    PluginManager m_plugins;
    /*
    // Loaded worlds
    WorldManager m_worlds;
    */
    // Current world
    World m_world;
    // CPA
    ChunkPointerArray m_cpa;
    // Loading test
    WorldLoader m_worldLoader;
};

#endif // !NEWORLD_H_
