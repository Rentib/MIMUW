/*
  Executor, homework assignment for the course "Concurrent Programming".
  Copyright (C) 2022 Stanisław Bitner <sb438247>

  Executor is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  Executor is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef EXECUTOR_TASK_
#define EXECUTOR_TASK_

#include <stddef.h>

extern void task_setup(void);
extern void task_cleanup(void);
extern void task_create(size_t T, char **args);
extern void task_kill(size_t T, int sig);
extern void task_out(size_t T, int fd);

extern void task_block(void);
extern void task_unblock(void);

#endif /* EXECUTOR_TASK_ */
