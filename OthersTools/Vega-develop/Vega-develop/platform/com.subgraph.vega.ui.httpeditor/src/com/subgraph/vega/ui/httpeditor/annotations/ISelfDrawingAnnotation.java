/*******************************************************************************
 * Copyright (c) 2011 Subgraph.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 * 
 * Contributors:
 *     Subgraph - initial API and implementation
 ******************************************************************************/
package com.subgraph.vega.ui.httpeditor.annotations;

import org.eclipse.swt.custom.StyledText;
import org.eclipse.swt.graphics.GC;

public abstract interface ISelfDrawingAnnotation
{
  public abstract void draw(GC gc, StyledText textControl, int offset, int length);
}

