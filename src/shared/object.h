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

#ifndef OBJECT_H_
#define OBJECT_H_

#include "aabb.h"
#include "vec3.h"

class Object
{
public:
    virtual ~Object()
    {
    }

    /*
        int getHealth() const
        { return _health; }
        void setHealth(int val)
        { _health = val; }
    */

    Vec3d getPosition() const
    {
        return _position;
    }

    void setPosition(Vec3d val)
    {
        _position = val;
    }

    Vec3d getRotation() const
    {
        return _rotation;
    }

    void setRotation(Vec3d val)
    {
        _rotation = val;
    }

    Vec3d getSize() const
    {
        return _size;
    }

    AABB getHitbox() const
    {
        return _hitbox;
    }

    virtual void update() = 0;

private:
    Vec3d _position, _size, _rotation;
    //    int _health;
    AABB _hitbox;
};

#endif // OBJECT_H_
