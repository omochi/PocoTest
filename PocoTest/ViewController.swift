//
//  ViewController.swift
//  PocoTest
//
//  Created by おもちメタル on 2015/03/31.
//  Copyright (c) 2015年 omochimetaru. All rights reserved.
//

import Cocoa

class ViewController: NSViewController {
	
	var app: UnsafeMutablePointer<Void> = nil

	override func viewDidLoad() {
		super.viewDidLoad()

		app = ApplicationInit()
	}

	override var representedObject: AnyObject? {
		didSet {
		// Update the view, if already loaded.
		}
	}

	
}

