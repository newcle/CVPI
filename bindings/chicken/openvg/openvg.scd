;; This file is part of CVPI.
;; 
;; Copyright (C) 2015 Devin Homan
;; 
;; This program is free software: you can redistribute it and/or
;; modify it under the terms of the GNU Lesser General Public License
;; as published by the Free Software Foundation, either version 3 of
;; the License, or (at your option) any later version.
;; 
;; This program is distributed in the hope that it will be useful,
;; but WITHOUT ANY WARRANTY; without even the implied warranty of
;; MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
;; GNU Lesser General Public License for more details.
;; 
;; You should have received a copy of the GNU Lesser General Public License
;; along with this program.  If not, see <http://www.gnu.org/licenses/>.
 

;(define debug? (make-parameter #t))
;;; ffi for openvg
;#>
;#ifndef _OPENVG_H
;#include "openvg.h"
;#endif
;<#

(module openvg *
	(import chicken)
	(import scheme)
	(import foreign)
	(import foreigners)

	(include "openvg.scm"))
