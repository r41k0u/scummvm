/* ScummVM - Graphic Adventure Engine
 *
 * ScummVM is the legal property of its developers, whose names
 * are too numerous to list here. Please refer to the COPYRIGHT
 * file distributed with this source distribution.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef DIRECTOR_DEBUGGER_H
#define DIRECTOR_DEBUGGER_H

#include "gui/debugger.h"
#include "director/director.h"

namespace Director {

class Debugger : public GUI::Debugger {
public:
	Debugger();
	~Debugger();
	void debugLogFile(Common::String logs, bool prompt);

private:
	bool cmd_lingo(int argc, const char **argv);

	bool lingoCommandProcessor(const char *inputOrig);

	Common::DumpFile _out;
	Common::String _outName;
};


} // End of namespace Director

#endif
