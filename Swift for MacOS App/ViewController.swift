//
//  ViewController.swift
//  Swift for MacOS App
//
//  Created by tautau on 2019/12/31.
//  Copyright © 2019 tautau. All rights reserved.
//

import Cocoa


class ViewController: NSViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        Objective_CClass.printHello()
        let object = Objective_CClass()
        print(object.sayHello())
        // Do any additional setup after loading the view.
    }

    override var representedObject: Any? {
        didSet {
        // Update the view, if already loaded.
        }
    }


}

