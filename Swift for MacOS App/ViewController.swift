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
        let uartController = UART()
        for port in uartController.uartList() {
            print(port)
        }
        // Do any additional setup after loading the view.
    }

    override var representedObject: Any? {
        didSet {
        // Update the view, if already loaded.
        }
    }


}

